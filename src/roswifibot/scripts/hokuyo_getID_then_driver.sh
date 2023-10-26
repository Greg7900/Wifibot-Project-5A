#!/bin/sh
# ensure the device is ready before launching the "hokuyo_node" driver
DEVICE=/dev/ttyACM0
set -e # stop at first error

while [ ! -c "$DEVICE" ]; do # wait for "character device" (-b) to appear
  echo "Waiting for device $DEVICE to appear..."
  sleep 2
done

echo "Trying to get device ID $DEVICE..."
rosrun hokuyo_node getID $DEVICE

echo "Spawning laser driver for device $DEVICE..."
# the hokuyo laser node, -120 degrees -> 120 degrees
# sudo chmod a+rwx /dev/ttyACM0
rosrun hokuyo_node hokuyo_node

