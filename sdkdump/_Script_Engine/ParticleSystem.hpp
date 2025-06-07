#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct InterpCurveEdSetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x118]; public:
    void* get_SystemUpdateMode();
    float& get_UpdateTime_FPS();
    float& get_UpdateTime_Delta();
    float& get_WarmupTime();
    float& get_WarmupTickRate();
    void* get_Emitters();
    _Script_Engine::ParticleSystemComponent*& get_PreviewComponent();
    _Script_Engine::InterpCurveEdSetup*& get_CurveEdSetup();
    bool get_bOrientZAxisTowardCamera();
    void set_bOrientZAxisTowardCamera(bool value);
    float& get_LODDistanceCheckTime();
    void* get_LODMethod();
    void* get_LODDistances();
    bool get_bRegenerateLODDuplicate();
    void set_bRegenerateLODDuplicate(bool value);
    void* get_LODSettings();
    bool get_bUseFixedRelativeBoundingBox();
    void set_bUseFixedRelativeBoundingBox(bool value);
    void* get_FixedRelativeBoundingBox();
    float& get_SecondsBeforeInactive();
    bool get_bShouldResetPeakCounts();
    void set_bShouldResetPeakCounts(bool value);
    bool get_bHasPhysics();
    void set_bHasPhysics(bool value);
    bool get_bHasCollision();
    void set_bHasCollision(bool value);
    bool get_bUseRealtimeThumbnail();
    void set_bUseRealtimeThumbnail(bool value);
    bool get_ThumbnailImageOutOfDate();
    void set_ThumbnailImageOutOfDate(bool value);
    float& get_Delay();
    float& get_DelayLow();
    bool get_bUseDelayRange();
    void set_bUseDelayRange(bool value);
    bool get_bAutoDeactivate();
    void set_bAutoDeactivate(bool value);
    void* get_MinTimeBetweenTicks();
    void* get_InsignificantReaction();
    float& get_InsignificanceDelay();
    void* get_MaxSignificanceLevel();
    void* get_MaxPoolSize();
    void* get_MacroUVPosition();
    float& get_MacroUVRadius();
    void* get_OcclusionBoundsMethod();
    void* get_CustomOcclusionBounds();
    void* get_SoloTracking();
    void* get_NamedMaterialSlots();
    static _Script_CoreUObject::Class* static_class();
    bool ContainsEmitterType(void* TypeData);
}; // Size: 0x140
#pragma pack(pop)
}
