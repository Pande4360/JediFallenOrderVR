#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsDirectionAnimationParameters.hpp"
#include "SwDefenseParameters.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwDefenseParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwDefenseParameters");
    return result;
}
void* _Script_SwGame::SwDefenseParameters::get_DefenseType() {
    return (void*)((uintptr_t)this + 0x2);
}
