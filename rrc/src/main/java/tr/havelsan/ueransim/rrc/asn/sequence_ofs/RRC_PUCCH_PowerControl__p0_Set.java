/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_P0_PUCCH;

public class RRC_PUCCH_PowerControl__p0_Set extends RRC_SequenceOf<RRC_P0_PUCCH> {

    @Override
    public Class<RRC_P0_PUCCH> getItemType() {
        return RRC_P0_PUCCH.class;
    }

}
