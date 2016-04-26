#!/bin/sh -x

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

cd "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_commander"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
/usr/bin/env \
    PYTHONPATH="/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/install/lib/python2.7/dist-packages:/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build" \
    "/usr/bin/python" \
    "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_commander/setup.py" \
    build --build-base "/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/build/moveit_commander" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/install" --install-scripts="/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/install/bin"
