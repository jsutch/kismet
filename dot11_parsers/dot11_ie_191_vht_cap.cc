/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "dot11_ie_191_vht_cap.h"

void dot11_ie_191_vht_cap::parse(std::shared_ptr<kaitai::kstream> p_io) {
    m_vht_capabilities = p_io->get_u4le();
    m_rx_mcs_map = p_io->get_u2le();
    m_rx_mcs_set = p_io->get_u2le();
    m_tx_mcs_map = p_io->get_u2le();
    m_tx_mcs_set = p_io->get_u2le();
}

