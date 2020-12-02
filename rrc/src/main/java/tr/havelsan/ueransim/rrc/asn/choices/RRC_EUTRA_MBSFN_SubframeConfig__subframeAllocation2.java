/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.rrc.asn.core.RRC_BitString;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Choice;

public class RRC_EUTRA_MBSFN_SubframeConfig__subframeAllocation2 extends RRC_Choice {

    public RRC_BitString oneFrame;
    public RRC_BitString fourFrames;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "oneFrame","fourFrames" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "oneFrame","fourFrames" };
    }

}
