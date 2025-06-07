#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_Piece.hpp"
float& _Script_SwGame::SwSimpleDestructible_Piece::get_DamagePointsNeededToDestroy() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwSimpleDestructible_Piece::get_PieceComponent() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_Piece::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_Piece");
    return result;
}
