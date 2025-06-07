#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_PiecePhysicsParameters.hpp"
float& _Script_SwGame::SwSimpleDestructible_PiecePhysicsParameters::get_HitLocationImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_PiecePhysicsParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_PiecePhysicsParameters");
    return result;
}
float& _Script_SwGame::SwSimpleDestructible_PiecePhysicsParameters::get_HitLocationImpulseRandomVariation() {
    return *(float*)((uintptr_t)this + 0x4);
}
