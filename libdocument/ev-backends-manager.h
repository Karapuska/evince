/* this file is part of evince, a gnome document viewer
 *
 *  Copyright (C) 2007 Carlos Garcia Campos <carlosgc@gnome.org>
 *
 * Evince is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Evince is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef EV_BACKENDS_MANAGER
#define EV_BACKENDS_MANAGER

#include <glib.h>

#include "ev-document.h"

G_BEGIN_DECLS

typedef struct _EvTypeInfo {
	const gchar  *desc;
	const gchar **mime_types;
} EvTypeInfo;

gboolean   ev_backends_manager_init                       (void);
void       ev_backends_manager_shutdown                   (void);

EvDocument  *ev_backends_manager_get_document             (const gchar *mime_type);
const gchar *ev_backends_manager_get_document_module_name (EvDocument  *document);
EvTypeInfo  *ev_backends_manager_get_document_type_info   (EvDocument  *document);
GList       *ev_backends_manager_get_all_types_info       (void);

G_END_DECLS

#endif /* EV_BACKENDS_MANAGER */