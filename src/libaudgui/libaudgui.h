/*
 * libaudgui.h
 * Copyright 2007-2013 Giacomo Lozito, Tomasz Moń, and John Lindgren
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions, and the following disclaimer in the documentation
 *    provided with the distribution.
 *
 * This software is provided "as is" and without any warranty, express or
 * implied. In no event shall the authors be liable for any damages arising from
 * the use of this software.
 */

#ifndef LIBAUDGUI_H
#define LIBAUDGUI_H

#include <libaudcore/objects.h>

struct PluginHandle;

void audgui_show_add_url_window(bool open);

void audgui_jump_to_track(void);
void audgui_jump_to_track_hide(void);

void audgui_run_filebrowser(bool open);
void audgui_hide_filebrowser(void);

/* about.c */
void audgui_show_about_window (void);
void audgui_hide_about_window (void);

/* confirm.c */
void audgui_confirm_playlist_delete (int playlist);
void audgui_show_playlist_rename (int playlist);

/* equalizer.c */
void audgui_show_equalizer_window (void);
void audgui_hide_equalizer_window (void);

/* infopopup.c */
void audgui_infopopup_show (int playlist, int entry);
void audgui_infopopup_show_current (void);
void audgui_infopopup_hide (void);

/* infowin.c */
void audgui_infowin_show (int playlist, int entry);
void audgui_infowin_show_current (void);
void audgui_infowin_hide (void);

/* init.c */
void audgui_init (void);
void audgui_cleanup (void);

/* jump-to-time.c */
void audgui_jump_to_time (void);

/* playlists.c */
void audgui_import_playlist (void);
void audgui_export_playlist (void);

/* plugin-menu.c */
void audgui_plugin_menu_add (int id, void (* func) (void), const char * name, const char * icon);
void audgui_plugin_menu_remove (int id, void (* func) (void));

/* plugin-prefs.c */
void audgui_show_plugin_about (PluginHandle * plugin);
void audgui_show_plugin_prefs (PluginHandle * plugin);

/* prefs-window.c */
void audgui_show_prefs_window (void);
void audgui_show_prefs_for_plugin_type (int type);
void audgui_hide_prefs_window (void);

/* queue-manager.c */
void audgui_queue_manager_show (void);

/* ui_playlist_manager.c */
void audgui_playlist_manager (void);

/* urilist.c */
void audgui_urilist_open (const char * list);
void audgui_urilist_insert (int playlist, int position, const char * list);
StringBuf audgui_urilist_create_from_selected (int playlist);

#endif /* LIBAUDGUI_H */
