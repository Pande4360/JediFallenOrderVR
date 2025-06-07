#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameInstance.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_RsGameTechRT {
struct RsWorldMap;
}
namespace _Script_RsGameTechRT {
struct RAPSystem;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapHologramBase;
}
namespace _Script_RsGameTechRT {
struct RsMissionObjectiveSystemBase;
}
namespace _Script_RsGameTechRT {
struct RsNarrativeSystem;
}
namespace _Script_RsGameTechRT {
struct RsZiplineManager;
}
namespace _Script_Engine {
struct RsTelemetryLogger;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameInstance : public _Script_Engine::GameInstance {
    private: char pad_b0[0x128]; public:
    _Script_Engine::DataTable*& get_ImpactEffectsSurfaceTable();
    _Script_Engine::DataTable*& get_ImpactEffectsCharacterTable();
    _Script_RsGameTechRT::RsWorldMap*& get_RsWorldMap();
    _Script_RsGameTechRT::RsWorldMapHologramBase*& get_Holomap();
    _Script_RsGameTechRT::RsMissionObjectiveSystemBase*& get_MissionObjectiveSystem();
    _Script_RsGameTechRT::RsZiplineManager*& get_ZiplineManager();
    void* get_NarrativeSystemClass();
    _Script_RsGameTechRT::RAPSystem*& get_RAPSystem();
    _Script_RsGameTechRT::RsNarrativeSystem*& get_RsNarrativeSystem();
    _Script_Engine::RsTelemetryLogger*& get_TelemetryLogger();
    static _Script_CoreUObject::Class* static_class();
    _Script_Engine::RsTelemetryLogger* GetTelemetryLogger();
    _Script_RsGameTechRT::RsNarrativeSystem* GetRsNarrativeSystem();
    _Script_RsGameTechRT::RAPSystem* GetRAPSystem();
}; // Size: 0x1d8
#pragma pack(pop)
}
