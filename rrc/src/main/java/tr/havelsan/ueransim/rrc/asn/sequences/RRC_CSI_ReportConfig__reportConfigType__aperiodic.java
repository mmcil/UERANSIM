/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_CSI_ReportConfig__reportConfigType__aperiodic__reportSlotOffsetList;

public class RRC_CSI_ReportConfig__reportConfigType__aperiodic extends RRC_Sequence {

    public RRC_CSI_ReportConfig__reportConfigType__aperiodic__reportSlotOffsetList reportSlotOffsetList;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "reportSlotOffsetList" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "reportSlotOffsetList" };
    }

    @Override
    public String getAsnName() {
        throw new IllegalStateException("ASN.1 name is treated null for anonymous types.");
    }

    @Override
    public String getXmlTagName() {
        throw new IllegalStateException("XML tag name is treated null for anonymous types.");
    }

}
