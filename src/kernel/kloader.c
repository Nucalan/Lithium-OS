 /* Copyright (C) 2020 LithiumOS-Team

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation, either version 3 of the
    License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "../lib/stdint.h"

extern uint32_t fat32_get_rootfile(uint8_t name[8], uint32_t *file_ptr);

void load()
{
    char name[8] = {'k', 'e', 'r', 'n', 'e', 'l', ' ', ' '};
    fat32_get_rootfile(name, (uint32_t *)0x100000);
}

