#ifndef __I386_ACPI_H__
#define __I386_ACPI_H__
/*
 * Copyright (C) 2007, The EROS Group, LLC.
 *
 * This file is part of the Coyotos Operating System.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

/** @file
 *
 * @brief Minimal ACPI bootstrap support.
 */
#include <stddef.h>

/** @brief Populate the CPU structures for each of the available CPUs.
 * Return number of CPUs according to ACPI, or 0 if ACPI information
 * not available.
 *
 * If successful, sets lapic_requires_8259_disable and lapic_pa as a
 * side effect.
 */
extern size_t acpi_probe_cpus(void);

#endif /* __I386_ACPI_H__ */
