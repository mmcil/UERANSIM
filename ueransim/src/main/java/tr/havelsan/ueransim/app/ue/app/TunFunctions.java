/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.ue.app;

import java.nio.ByteBuffer;

class TunFunctions {

    public static native int tunAllocate(String namePrefix, String[] allocatedName);

    public static native void tunConfigure(String tunName, String ipAddress);

    public static native int read(int fd, ByteBuffer buffer);

    public static native int write(int fd, ByteBuffer buffer, int size);
}
