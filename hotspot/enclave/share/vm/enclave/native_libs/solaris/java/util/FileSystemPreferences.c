/*
 * Copyright (c) 2001, 2014, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

/*
 * Solaris/Linux platform specific code to support the Prefs API.
 */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
//#include <utime.h>
#include "jni_util.h"

JNIEXPORT jint JNICALL
Java_java_util_prefs_FileSystemPreferences_chmod(JNIEnv *env,
                       jclass thisclass, jstring java_fname, jint permission) {
    return -1;
}

#if defined(_ALLBSD_SOURCE)
typedef struct flock FLOCK;
#else
typedef struct flock64 FLOCK;
#endif

/**
 * Try to open a named lock file.
 * The result is a cookie that can be used later to unlock the file.
 * On failure the result is zero.
 */
JNIEXPORT jintArray JNICALL
Java_java_util_prefs_FileSystemPreferences_lockFile0(JNIEnv *env,
    jclass thisclass, jstring java_fname, jint permission, jboolean shared) {
    // TODO
    return 0;
}


/**
 * Try to unlock a lock file, using a cookie returned by lockFile.
 */
JNIEXPORT jint JNICALL
Java_java_util_prefs_FileSystemPreferences_unlockFile0(JNIEnv *env,
                                      jclass thisclass, jint fd) {

    // TODO
    return 0;
}
