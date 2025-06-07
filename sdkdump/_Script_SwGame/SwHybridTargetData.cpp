#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwHybridTargetData.hpp"
float& _Script_SwGame::SwHybridTargetData::get_StickHalfAngle() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwHybridTargetData::get_StickRadius() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SwGame::SwHybridTargetData::get_StickStartRadius() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwHybridTargetData::get_StickProximityWeight() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SwGame::SwHybridTargetData::get_StickAdditiveScore() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwHybridTargetData::get_StickMultiplicativeScore() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SwGame::SwHybridTargetData::get_StickOffscreenPenalty() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraRadius() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraHalfAngle() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraStartRadius() {
    return *(float*)((uintptr_t)this + 0x24);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraProximityWeight() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraMultiplicativeScore() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraAdditiveScore() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_SwGame::SwHybridTargetData::get_CameraOffscreenPenalty() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_SwGame::SwHybridTargetData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwHybridTargetData");
    return result;
}
