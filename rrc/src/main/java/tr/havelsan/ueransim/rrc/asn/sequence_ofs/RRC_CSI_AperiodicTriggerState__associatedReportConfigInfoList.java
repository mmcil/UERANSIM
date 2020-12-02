/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_CSI_AssociatedReportConfigInfo;

public class RRC_CSI_AperiodicTriggerState__associatedReportConfigInfoList extends RRC_SequenceOf<RRC_CSI_AssociatedReportConfigInfo> {

    @Override
    public Class<RRC_CSI_AssociatedReportConfigInfo> getItemType() {
        return RRC_CSI_AssociatedReportConfigInfo.class;
    }

}
