#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSyncDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x150]; public:
    void* get_BreakOnMontageEnd();
    void* get_BreakOnTakeDamage();
    void* get_LocationSyncType();
    void* get_Master();
    void* get_Slaves();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    bool get_bLoop();
    void set_bLoop(bool value);
    bool get_bAdjustSyncLocation();
    void set_bAdjustSyncLocation(bool value);
    bool get_bNavToSync();
    void set_bNavToSync(bool value);
    float& get_SyncDistance();
    bool get_bNavIgnoreZ();
    void set_bNavIgnoreZ(bool value);
    _Script_Engine::CurveFloat*& get_VelocityCurveOverride();
    bool get_bDisallowAIAttacks();
    void set_bDisallowAIAttacks(bool value);
    bool get_bGroundWithRaycasts();
    void set_bGroundWithRaycasts(bool value);
    bool get_bOrientZWithGround();
    void set_bOrientZWithGround(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
