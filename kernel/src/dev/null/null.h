#pragma once
#include <fs/devfs/devfs.h>
#include <fs/vfs/vfs.h>
#include <stddef.h>
#include <term/term.h>
#include <utils/basic.h>
#include <utils/libc.h>

extern struct devfsops nullops;
void devnull_init(struct vfs *curvfs);
