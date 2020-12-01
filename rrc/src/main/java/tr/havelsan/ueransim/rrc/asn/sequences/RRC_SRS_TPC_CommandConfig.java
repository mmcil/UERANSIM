/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_SRS_TPC_CommandConfig extends RRC_Sequence {

    public RRC_Integer startingBitOfFormat2_3;
    public RRC_Integer fieldTypeFormat2_3;
    public RRC_SRS_TPC_CommandConfig__ext1 ext1;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "startingBitOfFormat2-3","fieldTypeFormat2-3","ext1" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "startingBitOfFormat2_3","fieldTypeFormat2_3","ext1" };
    }

    @Override
    public String getAsnName() {
        return "SRS-TPC-CommandConfig";
    }

    @Override
    public String getXmlTagName() {
        return "SRS-TPC-CommandConfig";
    }

}
