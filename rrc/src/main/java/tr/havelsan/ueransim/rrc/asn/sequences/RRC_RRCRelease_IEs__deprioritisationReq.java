/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.rrc.asn.core.RRC_Integer;
import tr.havelsan.ueransim.rrc.asn.core.RRC_Sequence;

public class RRC_RRCRelease_IEs__deprioritisationReq extends RRC_Sequence {

    public RRC_Integer deprioritisationType;
    public RRC_Integer deprioritisationTimer;

    @Override
    public String[] getMemberNames() {
        return new String[]{ "deprioritisationType","deprioritisationTimer" };
    }

    @Override
    public String[] getMemberIdentifiers() {
        return new String[]{ "deprioritisationType","deprioritisationTimer" };
    }

}
