#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "SwUIBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwUIBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwUIBlueprintLibrary");
    return result;
}
float _Script_SwGame::SwUIBlueprintLibrary::GetProgressBarScrollPercent(float Fraction, float ScrollFraction, float DeltaTime, float RateFactor, float MinimumRate) {
    return;
}
void* _Script_SwGame::SwUIBlueprintLibrary::GetInputKeyName(_Script_InputCore::Key InputKey) {
    return;
}
