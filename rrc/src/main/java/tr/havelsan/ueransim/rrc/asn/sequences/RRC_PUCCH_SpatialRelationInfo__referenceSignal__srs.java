/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_BWP_Id;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_SRS_ResourceId;

public class RRC_PUCCH_SpatialRelationInfo__referenceSignal__srs extends RRC_Sequence {

    public RRC_SRS_ResourceId resource;
    public RRC_BWP_Id uplinkBWP;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "resource","uplinkBWP" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "resource","uplinkBWP" };
    }

}
