/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details:
 *
 * Copyright (C) 2008 - 2009 Novell, Inc.
 * Copyright (C) 2009 Red Hat, Inc.
 */

#ifndef MM_PLUGIN_SIERRA_H
#define MM_PLUGIN_SIERRA_H

#include "mm-plugin-base.h"
#include "mm-generic-gsm.h"

#define MM_TYPE_PLUGIN_SIERRA            (mm_plugin_sierra_get_type ())
#define MM_PLUGIN_SIERRA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), MM_TYPE_PLUGIN_SIERRA, MMPluginSierra))
#define MM_PLUGIN_SIERRA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  MM_TYPE_PLUGIN_SIERRA, MMPluginSierraClass))
#define MM_IS_PLUGIN_SIERRA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MM_TYPE_PLUGIN_SIERRA))
#define MM_IS_PLUGIN_SIERRA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  MM_TYPE_PLUGIN_SIERRA))
#define MM_PLUGIN_SIERRA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  MM_TYPE_PLUGIN_SIERRA, MMPluginSierraClass))

typedef struct {
    MMPluginBase parent;
} MMPluginSierra;

typedef struct {
    MMPluginBaseClass parent;
} MMPluginSierraClass;

GType mm_plugin_sierra_get_type (void);

G_MODULE_EXPORT MMPlugin *mm_plugin_create (void);

#endif /* MM_PLUGIN_SIERRA_H */
