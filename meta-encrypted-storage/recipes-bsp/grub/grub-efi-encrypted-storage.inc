FILESEXTRAPATHS:prepend := "${THISDIR}/grub-efi:"
SRC_URI:append:class-target = " \
    file://0001-cryptodisk-Refactor-to-discard-have_it-global.patch \
    file://0002-cryptodisk-Return-failure-in-cryptomount-when-no-cry.patch \
    file://0003-cryptodisk-Improve-error-messaging-in-cryptomount-in.patch \
    file://0004-cryptodisk-Improve-cryptomount-u-error-message.patch \
    file://0005-cryptodisk-Add-infrastructure-to-pass-data-from-cryp.patch \
    file://0006-cryptodisk-Refactor-password-input-out-of-crypto-dev.patch \
    file://0007-cryptodisk-Move-global-variables-into-grub_cryptomou.patch \
    file://0008-cryptodisk-Improve-handling-of-partition-name-in-cry.patch \
    file://0009-cryptodisk-Fix-Coverity-use-after-free-bug.patch \
    file://0010-disk-Remove-trailing-whitespaces.patch \
    file://0011-disk-cryptodisk-Add-options-to-cryptomount-to-suppor.patch \
    file://0012-kern-efi-sb-skip-verification-of-cryptodisk-encrypti.patch \
"

DEPENDS:append:class-target = " \
    libtasn1 \
"
