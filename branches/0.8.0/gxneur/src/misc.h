/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 *  (c) XNeur Team 2006
 *
 */

#ifndef _MISC_H_
#define _MISC_H_

struct _tray_icon;

char *xneur_get_file_content(const char *path);
char *xneur_get_dict_path(int layout_no, const char *file_name);
char *xneur_get_home_dict_path(int layout_no, const char *file_name);

void xneur_exit(void);
void xneur_start(void);
void xneur_preference(void);
void xneur_about(void);

void xneur_add_exclude_app(void);
void xneur_rem_exclude_app(void);

void xneur_add_auto_app(void);
void xneur_rem_auto_app(void);

void xneur_add_manual_app(void);
void xneur_rem_manual_app(void);

void xneur_save_preference(void);
void xneur_dontsave_preference(void);

void xneur_start_stop(GtkWidget *widget, struct _tray_icon *tray);
void xneur_auto_manual(GtkWidget *widget, struct _tray_icon *tray);

int xneur_modifiers_to_string(unsigned int modifier, char * str);

#endif /* _MISC_H_ */
