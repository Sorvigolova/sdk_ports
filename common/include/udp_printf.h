
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef _UDP_PRINTF_H_
#define _UDP_PRINTF_H_

#define PRINTF(fmt, ...)	udp_printf(fmt, ## __VA_ARGS__)

int udp_printf_init(void);

void udp_printf_deinit(void);

int udp_printf(const char *fmt, ...);

#endif
