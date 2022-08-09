// license:BSD-3-Clause
// copyright-holders:Chris Kirmse, Mike Haaland, Ren� Single, Mamesick

#include "winui.h"

/**************************************************************
 * functions
 **************************************************************/

// Load indexes from history.dat if found
char * GetGameHistory(int driver_index)
{
	static char dataBuf[2048 * 2048];
	static char buffer[2048 * 2048];

	memset(&buffer, 0, sizeof(buffer));
	memset(&dataBuf, 0, sizeof(dataBuf));

	if (load_driver_history(&driver_list::driver(driver_index), buffer, WINUI_ARRAY_LENGTH(buffer)) == 0)
		strcat(dataBuf, buffer);

	if (load_driver_initinfo(&driver_list::driver(driver_index), buffer, WINUI_ARRAY_LENGTH(buffer)) == 0)
		strcat(dataBuf, buffer);

	if (load_driver_mameinfo(&driver_list::driver(driver_index), buffer, WINUI_ARRAY_LENGTH(buffer)) == 0)
		strcat(dataBuf, buffer);

	if (load_driver_driverinfo(&driver_list::driver(driver_index), buffer, WINUI_ARRAY_LENGTH(buffer)) == 0)
		strcat(dataBuf, buffer);

	if (load_driver_scoreinfo(&driver_list::driver(driver_index), buffer, WINUI_ARRAY_LENGTH(buffer)) == 0)
		strcat(dataBuf, buffer);

	return ConvertToWindowsNewlines(dataBuf);
}
