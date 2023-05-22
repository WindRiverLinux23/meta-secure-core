require ${@bb.utils.contains('DISTRO_FEATURES', 'luks', 'grub-efi-encrypted-storage.inc', '', d)}
