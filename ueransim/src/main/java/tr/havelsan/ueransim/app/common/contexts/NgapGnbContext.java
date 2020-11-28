/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.common.contexts;

import tr.havelsan.ueransim.app.common.simctx.GnbSimContext;
import tr.havelsan.ueransim.itms.nts.NtsTask;

import java.util.HashMap;
import java.util.UUID;

public class NgapGnbContext {
    public final GnbSimContext gnbCtx;

    public NtsTask rrcTask;

    public HashMap<UUID, NgapAmfContext> amfContexts;
    public HashMap<UUID, NgapUeContext> ueContexts;
    public long ueNgapIdCounter;

    public NgapGnbContext(GnbSimContext gnbCtx) {
        this.gnbCtx = gnbCtx;
        this.amfContexts = new HashMap<>();
        this.ueContexts = new HashMap<>();
    }
}
