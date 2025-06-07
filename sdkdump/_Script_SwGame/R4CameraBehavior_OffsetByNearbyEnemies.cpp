#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
#include "R4CameraBehavior_OffsetByNearbyEnemies.hpp"
float& _Script_SwGame::R4CameraBehavior_OffsetByNearbyEnemies::get_SmoothingTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByNearbyEnemies::get_MaxEnemyDistance() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::R4CameraBehavior_OffsetByNearbyEnemies::get_MinOffset() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_OffsetByNearbyEnemies::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_OffsetByNearbyEnemies");
    return result;
}
float& _Script_SwGame::R4CameraBehavior_OffsetByNearbyEnemies::get_SmoothingPercent() {
    return *(float*)((uintptr_t)this + 0x3c);
}
