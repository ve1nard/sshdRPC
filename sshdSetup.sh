#! /usr/bin/bash
sudo rm /usr/local/share/man/man5/authorized_keys.5
sudo mv /usr/local/etc/moduli /usr/local/etc/moduliold
sudo mv /usr/local/etc/ssh_config /usr/local/etc/ssh_configold
sudo mv /usr/local/etc/sshd_config /usr/local/etc/sshd_configold

