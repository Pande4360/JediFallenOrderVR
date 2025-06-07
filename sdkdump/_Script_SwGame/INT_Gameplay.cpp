#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "INT_Gameplay.hpp"
void _Script_SwGame::INT_Gameplay::OnCollisionWithBumper() {
    return;
}
_Script_CoreUObject::Class* _Script_SwGame::INT_Gameplay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.INT_Gameplay");
    return result;
}
