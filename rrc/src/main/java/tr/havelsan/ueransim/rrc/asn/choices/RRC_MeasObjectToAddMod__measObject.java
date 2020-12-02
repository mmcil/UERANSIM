/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.choices;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Choice;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_MeasObjectEUTRA;
import tr.havelsan.ueransim.rrc.asn.sequences.RRC_MeasObjectNR;

public class RRC_MeasObjectToAddMod__measObject extends RRC_Choice {

    public RRC_MeasObjectNR measObjectNR;
    public RRC_MeasObjectEUTRA measObjectEUTRA;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "measObjectNR","measObjectEUTRA" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "measObjectNR","measObjectEUTRA" };
    }

}
