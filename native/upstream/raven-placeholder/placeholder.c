/* SPDX-License-Identifier: MIT
 * Copyright (c) 2026 Mirko Brombin
 * See LICENSES/MIT.txt.
 */
/* Raven placeholder image: the file the system directory holds for a library the runtime answers itself.
 *
 * A program that replaces a system library with a proxy of its own -- a mod loader's version.dll above all -- finds the library it stands
 * for by asking the system directory for it and stops when no file is there. Windows has a file for every library it answers, so this
 * image is copied under each name the runtime provides natively: it carries no export and never runs, since the loader answers a path in
 * the system directory with the runtime's own implementation. */
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved)
{
	(void)instance;
	(void)reason;
	(void)reserved;
	return TRUE;
}
