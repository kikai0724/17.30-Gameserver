#pragma once

namespace Globals {
	inline bool bIsProdServer = false;

	inline bool bCreativeEnabled = false;
	inline bool bSTWEnabled = false;
	inline bool bEventEnabled = false;

	inline bool bBotsEnabled = true;
	inline bool bBotsShouldUseManualTicking = false;

	inline int MaxBotsToSpawn = 95;
	inline int MinPlayersForEarlyStart = 95;

	inline int NextTeamIndex = 0;
	inline int CurrentPlayersOnTeam = 0;
	inline int MaxPlayersPerTeam = 1;
}
