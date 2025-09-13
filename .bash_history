.config/polybar/launch.sh 
.config/polybar/launch.sh 
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
V
[ -d /sys/firmware/efi ] && echo UEFI || echo BIOS
cat /etc/default/grub | grep GRUB_TIMEOUT
grep PROBER /etc/default/grub
grep search /boot/grub/grub.cfg
sudo vim /etc/default/grub 
sudo grub-mkconfig -o /boot/grub/grub.cfg
lsblk -f
sudo vim /etc/default/grub 
sudo vim /boot/grub/grub
sudo vim /boot/grub/grub.cfg 
reboot
pacman -S nvidia nvidia-utils nvidia-settings
sudo pacman -S nvidia nvidia-utils nvidia-settings
sudo vim /etc/X11/xorg.conf.d/20-nvidia.conf
nvidia-settings
sudo pacman -S nvidia-settings
nvidia-settings
sudo vim /etc/systemd/system/nvidia-undervolt.service
sudo systemctl daemon-reload
sudo systemctl enable nvidia-undervolt.service
nvidia-settings
reboot
nvidia-smi -q -d CLOCK
systemd enable nvidia-undervolt
sudo systemctl enable nvidia-undervolt.service
sudo systemctl start nvidia-undervolt.service
systemctl status nvidia-undervolt.service
nvidia-smi -q -d CLOCK
sudo vim /etc/X11/xorg.conf.d/20-nvidia.conf
sudo vim /etc/systemd/system/nvidia-undervolt.service
sudo systemctl stop nvidia-undervolt.service
systemctl daemon-reload
sudo systemctl stop nvidia-undervolt.service
sudo systemctl start nvidia-undervolt.service
sudo systemctl disable nvidia-undervolt.service
sudo systemctl enable nvidia-undervolt.service
sudo vim /etc/pulse/default.pa
pulseaudio -k
pulseaudio --start
pacman -S google-chrome-stable
sudo pacman -S google-chrome-stable
yay -S google-chrome-stable
killall google-chrome-stable
google-chrome-stable 
htop
killall /opt/google/chrome/chrome
ls /usr/share/sddm/themes/
sudo vim /etc/sddm.conf
sudo systemctl restart sddm
sudo vim /etc/sddm.conf
sudo systemctl restart sddm
pwd
sudo vim /etc/sddm.conf
sudo nvim /etc/sddm.conf
sudo systemctl restart sddm
sudo nvim /etc/sddm.conf
ls /usr/share/sddm/themes/
ls /usr/share/sddm/themes/silent/
ls /usr/share/sddm/themes/silent/configs/
ls /usr/share/sddm/themes/silent/Main.qml 
sudo vim /usr/share/sddm/themes/silent/Main.qml 
sudo vim /usr/share/sddm/themes/silent/metadata.desktop 
sudo systemctl restart sddm
nvim
nvim
nvim
htop
xrandr
nvim
pacman -Q chrome
pacman -Q google-chrome
pacman -S google-chrome
sudo pacman -S google-chrome
yay -S google-chrome
which shred
systemctl disable ly
sudo pacman -R ly
sudo pacman -S --needed sddm qt6-svg qt6-virtualkeyboard qt6-multimedia-ffmpeg
systemctl enable sddm
yay -S sddm-silent-theme
systemctl status sddm
systemctl start sddm
sudo pacman -S discord
sudo pacman -S discord
man pacman
sudo pacman -U discord
sudo pacman -Q discord
sudo pacman -S discord
sudo pacman -U discord
man pacman
sudo pacman -u discord
which mason
sudo pacman -S sudo pacman -Syu meson ninja base-devel
sudo pacman -Syu meson ninja base-devel
mkdir revival
cd revival/
ls
git init
git config --global init.defaultBrand 'master'
ls
git branch -a
git branch -A
git branch -l
git branch
exit
sudo pacman -U discord
sudo pacman -Syu'
sudo pacman -Syu
clang-format -style=llvm -dump-config > .clang-format
sudo pacman -S clang
sudo pacman -S clang
clang-format -style=llvm -dump-config > .clang-format
find ./src ./include ./tests -type f \( -name '*.cpp' -o -name '*.c' -o -name '*.hpp' -o -name '*.h' \) -print0 | xargs -0 clang-format -i
mason setup build
sudo pacman -S mason
meson setup build
meson setup build
meson compile -C build
meson compile -C build
meson setup build
meson compile -C build
meson setup --reconfigure
meson setup --reconfigure build
meson compile -C build
ls
ls build/
rm -rf build
meson setup build
meson compile -C build
meson setup build
meson compile -C build
ls build
rm -rf build/
meson compile -C build
meson setup build
meson compile -C build
rm -rf build/
meson setup build
meson compile -C build
meson test -C build
meson setup build
meson setup build
meson setup build
meson setup build
meson setup build
meson setup build
meson compile -C build
./build/tests/rvivl_tests
clang_format ready (c, cpp) /home/h/.local/share/nvim/mason/bin/clang-format
clang_format ready (c, cpp) /home/h/.local/share/nvim/mason/bin/clang-format
/home/h/.local/share/nvim/mason/bin/clang-format --version
/home/h/.local/share/nvim/mason/bin/clang-format rvivl/tests/test_main.cpp
meson setup build
meson compile -C build
systemd-analyze
cat /etc/fstab
sudo vim /etc/mkinitcpio.conf
cat /usr/share/mkinitcpio/example.preset 
cat /etc/mkinitcpio.conf
sudo vim /etc/mkinitcpio.conf
sudo nvim /etc/mkinitcpio.conf
sudo mkinitcpio -P
reboot
systemd-analyze 
dmesg --ctime --color=always | grep -i timeout
sudo dmesg --ctime --color=always | grep -i timeout
sudo swapon --show
systemd-analyze blame | head -20
vim /boot/grub/grub.cfg 
sudo pacman -Q grub
vim /etc/default/grub 
sudo nvim /etc/default/grub 
sudo nvim /etc/mkinitcpio.conf
sudo mkinitcpio -P
sudo nvim /etc/sysctl.d/20-quiet-printk.conf
sudo nvim /etc/systemd/system/getty@tty1.service.d/skip-prompt.conf
sudo nvim /etc/systemd/system/getty@tty1.service.d
sudo mkdir /etc/systemd/system/getty@tty1.service.d
sudo nvim /etc/systemd/system/getty@tty1.service.d/skip-prompt.conf
sudo nvim .bash_profile 
yay -S grub-silent
sudo nvim /etc/default/grub 
grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=GRUB
grub-install --target=x86_64-efi --efi-directory=/boot/grub --bootloader-id=GRUB
lsblk
grub-install --target=x86_64-efi --efi-directory=/boot/grub --bootloader-id=GRUB
grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=GRUB
grub-install --target=x86_64-efi --efi-directory=/boot/grub --bootloader-id=GRUBmount | grep nvme0n1p1
mount | grep nvme0n1p1
sudo grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=GRUB
grub-mkconfig -o /boot/grub/grub.cfg
sudo grub-mkconfig -o /boot/grub/grub.cfg
reboot
journalctl -u systemd-udevd.service
grep -r alsactl /usr/lib/udev/rules.d /etc/udev/rules.d
sudo mv /usr/lib/udev/rules.d/90-alsa-restore.rules /usr/lib/udev/rules.d/90-alsa-restore.rules.bak
sudo systemctl restart systemd-udevd
ls /usr/lib/udev/rules.d/90-alsa-restore.rules.bak 
reboot
sudo mv /usr/lib/udev/rules.d/90-alsa-restore.rules.bak /usr/lib/udev/rules.d/90-alsa-restore.rules
sudo systemctl restart systemd-udevd
cat /proc/asound/cards
cat /proc/asound/cards
sudo alsactl store 1
sudo alsactl store 2
sudo alsactl restore 1
sudo alsactl restore 2
lsof /dev/snd/*
sudo journalctl -b -1 -u systemd-udevd.service --no-pager
systemd-analyze blame
cat /etc/fstab
systemctl list-units | grep serial-getty
sudo systemctl mask dev-ttyS0.device
sudo systemctl mask dev-ttyS1.device
sudo systemctl mask dev-ttyS2.device
sudo systemctl mask dev-ttyS3.device
cat /proc/cmdline
reboot
sudo systemctl mask dev-ttyS0.devicesudo systemctl unmask dev-ttyS0.device
sudo systemctl unmask dev-ttyS1.device
sudo systemctl unmask dev-ttyS2.device
sudo systemctl unmask dev-ttyS3.device
yay -R grub-silent
sudo pacman -R grub-silent
yay -Q grub-silent
yay -Q grub
yay -R grub
sudo pacman -S grub
vim /etc/default/grub
sudo grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=GRUB
sudo grub-mkconfig -o /boot/grub/grub.cfg 
sudo reboot
killall spotify
sudo pacman -U spotify
which spotify
sudo pacman -Q spotify
sudo pacman -S spotify
man pacman
man pacman
yay -U spotify
sudo pacman -U spotify-launcher
sudo pacman -S spotify-launcher
sudo pacman -u spotify-launcher
sudo pacman -S spotify-launcher
sudo pacman -S discord
sudo pacman -U discord
sudo pacman -S discord
nvim
meson setup build
meson setup build --wipe
meson setup build --wipe
ninja -C build
./build/tests/gtest-all
meson install wrap vulkan-headers
meson wrap install vulkan-headers
meson setup build --wipe
ninja -C build
sudo pacman -S libvulkan-dev
sudo pacman -S vulkan-devel
meson test
meson test
meson tests
meson test
cd build/
meson test
cd ..
meson setup build --wipe
ninja -C build
meson setup build --wipe
meson setup build --wipe
meson setup build --wipe
meson setup build --wipe
ninja -C build
./build/tests/gtest-all
nvim .config/discord/settings.json 
meson setup build --wipe
meson setup build --wipe
ninja -C build
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
./build/tests/vulkan-test
ninja -C build
./build/tests/vulkan-test
ninja -C build
./build/tests/vulkan-test
meson wrap install sdl2
meson setup build --wipe
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
ninja -C build
meson setup build --wipe
ninja -C build
ninja -C build
meson setup build --wipe
ninja -C build
ninja -C build
./build/tests/vulkan-test
ninja -C build
ninja -C build
./build/tests/vulkan-test
ninja -C build
ninja -C build
ninja -C build
ninja -C build
ninja -C build
./build/tests/vulkan-test
ninja -C build
ninja -C build
ninja -C build
./build/tests/vulkan-test
meson wrap install glslang
meson wrap install glslang
meson setup build --wipe
ninja -C build
meson setup build --wipe
ninja -C build
sudo pacman -S glslang
sudo pacman -R glslang
which glslang
mkdir shaders
mkdir scripts
touch shaders/vertex.vert
touch shaders/fragment.frag
meson setup build --wipe
meson setup build --wipe
touch scripts/embed_shaders.py
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
ninja -C build
./build/tests/vulkan-test
[200~meson configure builddir -Dbuildtype=debug
ninja -C build~
meson configure builddir -Dbuildtype=debug
ninja -C build
meson configure build -Dbuildtype=debug
ninja -C build
meson configure build -Dbuildtype=debug
meson configure build -Dbuildtype=debug
ninja -C build
meson configure build -Dbuildtype=debug --wipe
meson setup build --wipe -Dbuildtype=debug
ninja -C build
which gdb
sudo pacman -S gdb
gdb ./build/tests/vulkan-test
gdb ./build/tests/vulkan-test
ninja -C build
ninja -C build
ninja -C build
gdb ./build/tests/vulkan-test
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
meson setup build --wipe
./build/tests/vulkan-test
meson setup build --wipe
meson setup build --wipe
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
meson setup build --wipe
ninja -C build
./build/tests/vulkan-test
./build/tests/vulkan-test
xrandr
xrandr --output DP-4 xrandr --output DP-4 --mode 2560x1440 --rate 479.99
xrandr --output DP-4 xrandr --output DP-4 --mode 2560x1440 --rate 479.99
xrandr --output DP-4 --mode 2560x1440 --rate 479.99
xrandr
vim ~/.config/i3/config 
nvim ~/.config/i3/config 
ls
nvim .config/alacritty/alacritty.toml 
ls
nvim .config/alacritty/alacritty.toml 
xcolor
sudo pacman -S x11-utils
sudo pacman -S xorg-server-utils
sudo pacman -S gpick
killall picom
picom
picom &&
picom &
test
ls
htop
htop
nvim .config/alacritty/alacritty.toml 
feh --bg-scale Downloads/GdErUjnXAAAsR7i.png 
feh --help
feh --bg-scale Pictures/macprotips-wallpaper-dump-february-2025-v0-0fc39v1cfshe1.jpg 
feh --bg-scale Pictures/bladerunner.png 
feh --bg-scale Pictures/ducati
feh --bg-scale Pictures/ducati.png 
feh --bg-scale Pictures/ducati-dark.png 
mkdir -p .config/nvim/colors
nvim .config/nvim/colors/persephone.lua
nvim 
nvim
nvim
feh --bg-scale Downloads/GdErUjnXAAAsR7i.png 
feh --bg-scale Downloads/GdErUjnXAAAsR7i.jpg 
feh --bg-scale Downloads/GdErUjnXAAAsR7i.png
rm -rf .config/nvim/colors/
nvim .config/nvim
ls
cat
htop
nvim
exit
feh --bg-scale Downloads/GdErUjnXAAAsR7i.jpg 
cat .config/alacritty/themes/terafox.toml 
nvim .config/alacritty/themes/terafox.toml
killall alacritty
ls .config/alacritty/
ls -lah .config/alacritty/
nvim .config/alacritty/themes/terafox.toml 
nvim .config/alacritty/alacritty.toml 
nvim .config/alacritty/alacritty.toml 
nvim .config/alacritty/alacritty.toml 
cat .config/alacritty/ter
cat .config/alacritty/themes/terafox.toml 
:qa
feh --bg-scale Downloads/GdErUjnXAAAsR7i.jpg 
feh --bg-scale Downloads/GdErUjnXAAAsR7i.png
feh --bg-scale Downloads/gihapeghvmy61.png 
cat .config/alacritty/themes/terafox.toml 
killall polybar
polybar
killall polybar
.config/polybar/launch.sh &
.config/polybar/launch.sh &
.config/polybar/launch.sh &
feh --bg-scale Downloads/ayiv6zczr1hf1.jpeg 
feh --bg-scale Pictures/ducati-dark.png 
exit
xit
exit
cat .config/i3/config 
cat .bashrc
cat .zshrc
exit
mv Downloads/wallhaven-85mqwy-colorized.png Pictures/
cd Pictures/
ls
mv wallhaven-85mqwy-colorized.png everforest-wallpaper.png
cd
feh --bg-scale Pictures/everforest-wallpaper.png 
cd .config/alacritty/themes/
ls
vim everforest.toml
nvim everforest.toml
nvim ../alacritty.toml 
nvim ../alacritty.toml 
nvim
killall polybar
polybar .config/polybar/launch.sh 
.config/polybar/launch.sh 
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
killall polybar
.config/polybar/launch.sh 
betterlockscreen -u Pictures/everforest-wallpaper.png 
