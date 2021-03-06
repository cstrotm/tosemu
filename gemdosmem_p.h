/*
 * TOSEMU - an emulated environment for TOS applications
 * Copyright (C) 2014 Johan Thelin <e8johan@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */

#ifndef GEMDOSMEM_H
#define GEMDOSMEM_H

#include "tossystem.h"

#include <stdint.h>

/* GEMDOS functions */

void gemdos_mem_init(struct tos_environment *);
void gemdos_mem_free();

uint32_t GEMDOS_Mshrink();
uint32_t GEMDOS_Malloc();
uint32_t GEMDOS_Mfree();

#endif /* GEMDOSMEM_H */
