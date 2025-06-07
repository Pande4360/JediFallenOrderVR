#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHealthComponent.hpp"
#include "SwHealthComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwHealthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwHealthComponent");
    return result;
}
