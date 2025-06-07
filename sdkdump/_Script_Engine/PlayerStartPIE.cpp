#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PlayerStart.hpp"
#include "PlayerStartPIE.hpp"
_Script_CoreUObject::Class* _Script_Engine::PlayerStartPIE::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerStartPIE");
    return result;
}
