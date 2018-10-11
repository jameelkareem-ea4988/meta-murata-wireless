# Copyright 2017-2018 NXP
# Released under the MIT license (see COPYING.MIT for the terms)

LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

SRCBRANCH = "imx_4.9.88_2.0.0_ga"
LOCALVERSION = "-${SRCBRANCH}"

#https://github.com/jameelkareem-ea4988/linux-imx.git
KERNEL_SRC ?= "git://github.com/jameelkareem-ea4988/linux-imx.git;protocol=https"
SRC_URI = "${KERNEL_SRC};branch=${SRCBRANCH}"
SRCREV = "26b30a6c5d63d0a93a3fe66665057ce94282b765"

S = "${WORKDIR}/git"
