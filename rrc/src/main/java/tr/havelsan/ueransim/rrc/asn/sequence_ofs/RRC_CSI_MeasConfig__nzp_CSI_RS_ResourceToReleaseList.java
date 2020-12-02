/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_NZP_CSI_RS_ResourceId;

public class RRC_CSI_MeasConfig__nzp_CSI_RS_ResourceToReleaseList extends RRC_SequenceOf<RRC_NZP_CSI_RS_ResourceId> {

    @Override
    public Class<RRC_NZP_CSI_RS_ResourceId> getItemType() {
        return RRC_NZP_CSI_RS_ResourceId.class;
    }

}
