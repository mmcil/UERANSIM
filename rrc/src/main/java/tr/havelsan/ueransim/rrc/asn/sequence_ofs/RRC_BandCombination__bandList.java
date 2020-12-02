/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequence_ofs;

import tr.havelsan.ueransim.rrc.asn.choices.RRC_BandParameters;
import tr.havelsan.ueransim.rrc.asn.core.RRC_SequenceOf;

public class RRC_BandCombination__bandList extends RRC_SequenceOf<RRC_BandParameters> {

    @Override
    public Class<RRC_BandParameters> getItemType() {
        return RRC_BandParameters.class;
    }

}
