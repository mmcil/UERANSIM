/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_CSI_ReportConfig__groupBasedBeamReporting__disabled extends RRC_Sequence {

    public RRC_Integer nrofReportedRS;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "nrofReportedRS" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "nrofReportedRS" };
    }

}
