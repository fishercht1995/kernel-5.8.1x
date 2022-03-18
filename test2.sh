apt update -y
sudo apt-get install -y git fakeroot build-essential ncurses-dev xz-utils libssl-dev bc flex libelf-dev bison
#wget https://cdn.kernel.org/pub/linux/kernel/v5.x/linux-5.8.1.tar.xz
#tar xvf linux-5.8.1.tar.gz
cp /boot/config-$(uname -r) .config
sudo apt install -y dwarves
