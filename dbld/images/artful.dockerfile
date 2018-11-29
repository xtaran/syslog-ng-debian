FROM ubuntu:17.10
ARG DISTRO=artful
ARG OBS_REPO=xUbuntu_17.10

LABEL maintainer="Andras Mitzki <andras.mitzki@balabit.com>, Laszlo Szemere <laszlo.szemere@balabit.com>"

COPY helpers/* /helpers/

# Install packages
RUN apt-get update -qq && apt-get install --no-install-recommends -y \
  python-pip \
  python-setuptools \
  wget

COPY required-pip/all.txt required-pip/${DISTRO}*.txt /required-pip/
RUN cat /required-pip/* | grep -v '^$\|^#' | xargs pip install

COPY required-apt/all.txt required-apt/${DISTRO}*.txt /required-apt/
RUN cat /required-apt/* | grep -v '^$\|^#' | xargs apt-get install --no-install-recommends -y

RUN /helpers/functions.sh add_obs_repo ${OBS_REPO}
COPY required-obs/all.txt required-obs/${DISTRO}*.txt /required-obs/
RUN cat /required-obs/* | grep -v '^$\|^#' | xargs apt-get install --no-install-recommends -y


RUN cd /tmp && wget http://ftp.de.debian.org/debian/pool/main/libn/libnative-platform-java/libnative-platform-jni_0.11-5_$(dpkg --print-architecture).deb
RUN cd /tmp && dpkg -i libnative-platform-jni*.deb

RUN /helpers/functions.sh gradle_installer
# grab gosu for easy step-down from root
RUN /helpers/functions.sh step_down_from_root_with_gosu $(dpkg --print-architecture)


# add a fake sudo command
RUN mv /helpers/fake-sudo.sh /usr/bin/sudo


# mount points for source code
RUN mkdir /source
VOLUME /source
VOLUME /build


ENTRYPOINT ["/helpers/entrypoint.sh"]
