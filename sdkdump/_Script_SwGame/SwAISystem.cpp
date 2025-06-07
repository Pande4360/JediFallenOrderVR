#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAISystem.hpp"
#include "SwAIFightSystem.hpp"
#include "SwAISystem.hpp"
_Script_SwGame::SwAIFightSystem*& _Script_SwGame::SwAISystem::get_FightSystem() {
    return *(_Script_SwGame::SwAIFightSystem**)((uintptr_t)this + 0x580);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAISystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAISystem");
    return result;
}
