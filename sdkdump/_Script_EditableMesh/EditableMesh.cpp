#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Plane.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "EditableMesh.hpp"
#include "SubdivisionLimitData.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_MeshDescription\EdgeID.hpp"
#include "..\_Script_MeshDescription\MeshTriangle.hpp"
#include "..\_Script_MeshDescription\PolygonGroupID.hpp"
#include "..\_Script_MeshDescription\PolygonID.hpp"
#include "..\_Script_MeshDescription\VertexID.hpp"
#include "..\_Script_MeshDescription\VertexInstanceID.hpp"
void _Script_EditableMesh::EditableMesh::WeldVertices(void*& VertexIDs, _Script_MeshDescription::VertexID& OutNewVertexID) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetVertexConnectedEdges(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedEdgeIDs) {
    return;
}
void* _Script_EditableMesh::EditableMesh::get_Adapters() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::MakeVertexID(int32_t VertexIndex) {
    return;
}
int32_t& _Script_EditableMesh::EditableMesh::get_SubdivisionCount() {
    return *(int32_t*)((uintptr_t)this + 0x438);
}
bool _Script_EditableMesh::EditableMesh::IsCommitted() {
    return;
}
int32_t& _Script_EditableMesh::EditableMesh::get_PendingCompactCounter() {
    return *(int32_t*)((uintptr_t)this + 0x434);
}
int32_t& _Script_EditableMesh::EditableMesh::get_TextureCoordinateCount() {
    return *(int32_t*)((uintptr_t)this + 0x338);
}
void _Script_EditableMesh::EditableMesh::CreateEdges(void*& EdgesToCreate, void*& OutNewEdgeIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsValidEdge(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
_Script_CoreUObject::Class* _Script_EditableMesh::EditableMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EditableMesh.EditableMesh");
    return result;
}
void _Script_EditableMesh::EditableMesh::TryToRemoveVertex(_Script_MeshDescription::VertexID VertexID, bool& bOutWasVertexRemoved, _Script_MeshDescription::EdgeID& OutNewEdgeID) {
    return;
}
void _Script_EditableMesh::EditableMesh::TryToRemovePolygonEdge(_Script_MeshDescription::EdgeID EdgeID, bool& bOutWasEdgeRemoved, _Script_MeshDescription::PolygonID& OutNewPolygonID) {
    return;
}
void _Script_EditableMesh::EditableMesh::TriangulatePolygons(void*& PolygonIDs, void*& OutNewTrianglePolygons) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetVertexInstanceConnectedPolygons(_Script_MeshDescription::VertexInstanceID VertexInstanceID, void*& OutConnectedPolygonIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::TessellatePolygons(void*& PolygonIDs, void* TriangleTessellationMode, void*& OutNewPolygonIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::StartModification(void* MeshModificationType, void* MeshTopologyChange) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetPolygonsVertexAttributes(void*& VertexAttributesForPolygons) {
    return;
}
void _Script_EditableMesh::EditableMesh::SplitPolygons(void*& PolygonsToSplit, void*& OutNewEdgeIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsUndoAllowed() {
    return;
}
void _Script_EditableMesh::EditableMesh::SplitEdge(_Script_MeshDescription::EdgeID EdgeID, void*& Splits, void*& OutNewVertexIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetVerticesCornerSharpness(void*& VertexIDs, void*& VerticesNewCornerSharpness) {
    return;
}
void _Script_EditableMesh::EditableMesh::GeneratePolygonTangentsAndNormals(void*& PolygonIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsBeingModified() {
    return;
}
void _Script_EditableMesh::EditableMesh::SetAllowCompact(bool bInAllowCompact) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetVerticesAttributes(void*& AttributesForVertices) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsOrphanedVertex(_Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetVertexInstancesAttributes(void*& AttributesForVertexInstances) {
    return;
}
void _Script_EditableMesh::EditableMesh::InsertEdgeLoop(_Script_MeshDescription::EdgeID EdgeID, void*& Splits, void*& OutNewEdgeIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetTextureCoordinateCount(int32_t NumTexCoords) {
    return;
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::InvalidVertexID() {
    return;
}
void _Script_EditableMesh::EditableMesh::SetSubdivisionCount(int32_t NewSubdivisionCount) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetEdgesVertices(void*& VerticesForEdges) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetEdgesHardnessAutomatically(void*& EdgeIDs, float MaxDotProductForSoftEdge) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetEdgesHardness(void*& EdgeIDs, void*& EdgesNewIsHard) {
    return;
}
void _Script_EditableMesh::EditableMesh::Revert() {
    return;
}
void _Script_EditableMesh::EditableMesh::SetEdgesCreaseSharpness(void*& EdgeIDs, void*& EdgesNewCreaseSharpness) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetEdgeConnectedPolygonCount(_Script_MeshDescription::EdgeID EdgeID) {
    return;
}
void _Script_EditableMesh::EditableMesh::SetEdgesAttributes(void*& AttributesForEdges) {
    return;
}
bool _Script_EditableMesh::EditableMesh::AnyChangesToUndo() {
    return;
}
void _Script_EditableMesh::EditableMesh::SetAllowUndo(bool bInAllowUndo) {
    return;
}
_Script_MeshDescription::PolygonID _Script_EditableMesh::EditableMesh::InvalidPolygonID() {
    return;
}
void _Script_EditableMesh::EditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(_Script_CoreUObject::Vector LineSegmentStart, _Script_CoreUObject::Vector LineSegmentEnd, void*& OutPolygons) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonPerimeterEdgeCount(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_EditableMesh::EditableMesh::SearchSpatialDatabaseForPolygonsInVolume(void*& Planes, void*& OutPolygons) {
    return;
}
_Script_EditableMesh::EditableMesh* _Script_EditableMesh::EditableMesh::RevertInstance() {
    return;
}
void _Script_EditableMesh::EditableMesh::RemovePolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t FirstVertexNumberToRemove, int32_t NumVerticesToRemove, bool bDeleteOrphanedVertexInstances) {
    return;
}
void _Script_EditableMesh::EditableMesh::MoveVertices(void*& VerticesToMove) {
    return;
}
void _Script_EditableMesh::EditableMesh::RebuildRenderMesh() {
    return;
}
void _Script_EditableMesh::EditableMesh::QuadrangulateMesh(void*& OutNewPolygonIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::PropagateInstanceChanges() {
    return;
}
void _Script_EditableMesh::EditableMesh::InitializeAdapters() {
    return;
}
_Script_MeshDescription::PolygonID _Script_EditableMesh::EditableMesh::MakePolygonID(int32_t PolygonIndex) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_EditableMesh::EditableMesh::MakePolygonGroupID(int32_t PolygonGroupIndex) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeleteOrphanVertices(void*& VertexIDsToDelete) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::MakeEdgeID(int32_t EdgeIndex) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsValidVertex(_Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreateMissingPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutNewEdgeIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsCompactAllowed() {
    return;
}
void _Script_EditableMesh::EditableMesh::ExtendVertices(void*& VertexIDs, bool bOnlyExtendClosestEdge, _Script_CoreUObject::Vector ReferencePosition, void*& OutNewExtendedVertexIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsValidPolygon(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsValidPolygonGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsSpatialDatabaseAllowed() {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonHoleEdges(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleEdgeIDs) {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsPreviewingSubdivisions() {
    return;
}
bool _Script_EditableMesh::EditableMesh::IsCommittedAsInstance() {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_EditableMesh::EditableMesh::InvalidPolygonGroupID() {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::InvalidEdgeID() {
    return;
}
void _Script_EditableMesh::EditableMesh::InsetPolygons(void*& PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, void* Mode, void*& OutNewCenterPolygonIDs, void*& OutNewSidePolygonIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::InsertPolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t InsertBeforeVertexNumber, void*& VerticesToInsert) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::GetVertexPairEdge(_Script_MeshDescription::VertexID VertexID, _Script_MeshDescription::VertexID NextVertexID, bool& bOutEdgeWindingIsReversed) {
    return;
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::GetVertexInstanceVertex(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetVertexInstanceCount() {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetVertexInstanceConnectedPolygonCount(_Script_MeshDescription::VertexInstanceID VertexInstanceID) {
    return;
}
_Script_MeshDescription::PolygonID _Script_EditableMesh::EditableMesh::GetVertexInstanceConnectedPolygon(_Script_MeshDescription::VertexInstanceID VertexInstanceID, int32_t ConnectedPolygonNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetVertexCount() {
    return;
}
_Script_CoreUObject::Vector _Script_EditableMesh::EditableMesh::ComputePolygonNormal(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetVertexConnectedPolygons(_Script_MeshDescription::VertexID VertexID, void*& OutConnectedPolygonIDs) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetVertexConnectedEdgeCount(_Script_MeshDescription::VertexID VertexID) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::GetVertexConnectedEdge(_Script_MeshDescription::VertexID VertexID, int32_t ConnectedEdgeNumber) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetVertexAdjacentVertices(_Script_MeshDescription::VertexID VertexID, void*& OutAdjacentVertexIDs) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetTextureCoordinateCount() {
    return;
}
_Script_EditableMesh::SubdivisionLimitData _Script_EditableMesh::EditableMesh::GetSubdivisionLimitData() {
    return;
}
void _Script_EditableMesh::EditableMesh::CreatePolygonGroups(void*& PolygonGroupsToCreate, void*& OutNewPolygonGroupIDs) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetSubdivisionCount() {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonTriangulatedTriangleCount(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_MeshDescription::MeshTriangle _Script_EditableMesh::EditableMesh::GetPolygonTriangulatedTriangle(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonTriangleNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::FindPolygonHoleVertexNumberForVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, _Script_MeshDescription::VertexID VertexID) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonPerimeterVertices(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterVertexIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonPerimeterVertexInstances(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterVertexInstanceIDs) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_EditableMesh::EditableMesh::GetPolygonPerimeterVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonVertexNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonPerimeterVertexCount(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::GetPolygonPerimeterVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t PolygonVertexNumber) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonPerimeterEdges(_Script_MeshDescription::PolygonID PolygonID, void*& OutPolygonPerimeterEdgeIDs) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::GetPolygonPerimeterEdge(_Script_MeshDescription::PolygonID PolygonID, int32_t PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) {
    return;
}
_Script_MeshDescription::PolygonID _Script_EditableMesh::EditableMesh::GetPolygonInGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID, int32_t PolygonNumber) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonHoleVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleVertexIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonHoleVertexInstances(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutHoleVertexInstanceIDs) {
    return;
}
_Script_MeshDescription::VertexInstanceID _Script_EditableMesh::EditableMesh::GetPolygonHoleVertexInstance(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t PolygonVertexNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonHoleVertexCount(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonGroupCount() {
    return;
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::GetPolygonHoleVertex(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t PolygonVertexNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonHoleEdgeCount(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::GetPolygonHoleEdge(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, int32_t HoleEdgeNumber) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonHoleCount(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonCountInGroup(_Script_MeshDescription::PolygonGroupID PolygonGroupID) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetPolygonCount() {
    return;
}
void _Script_EditableMesh::EditableMesh::GetPolygonAdjacentPolygons(_Script_MeshDescription::PolygonID PolygonID, void*& OutAdjacentPolygons) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_EditableMesh::EditableMesh::GetGroupForPolygon(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_MeshDescription::PolygonGroupID _Script_EditableMesh::EditableMesh::GetFirstValidPolygonGroup() {
    return;
}
void _Script_EditableMesh::EditableMesh::GetEdgeVertices(_Script_MeshDescription::EdgeID EdgeID, _Script_MeshDescription::VertexID& OutEdgeVertexID0, _Script_MeshDescription::VertexID& OutEdgeVertexID1) {
    return;
}
_Script_MeshDescription::VertexID _Script_EditableMesh::EditableMesh::GetEdgeVertex(_Script_MeshDescription::EdgeID EdgeID, int32_t EdgeVertexNumber) {
    return;
}
_Script_MeshDescription::EdgeID _Script_EditableMesh::EditableMesh::GetEdgeThatConnectsVertices(_Script_MeshDescription::VertexID VertexID0, _Script_MeshDescription::VertexID VertexID1) {
    return;
}
void _Script_EditableMesh::EditableMesh::GetEdgeLoopElements(_Script_MeshDescription::EdgeID EdgeID, void*& EdgeLoopIDs) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::GetEdgeCount() {
    return;
}
void _Script_EditableMesh::EditableMesh::GetEdgeConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, void*& OutConnectedPolygonIDs) {
    return;
}
_Script_MeshDescription::PolygonID _Script_EditableMesh::EditableMesh::GetEdgeConnectedPolygon(_Script_MeshDescription::EdgeID EdgeID, int32_t ConnectedPolygonNumber) {
    return;
}
void _Script_EditableMesh::EditableMesh::FlipPolygons(void*& PolygonIDs) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::FindPolygonPerimeterVertexNumberForVertex(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID VertexID) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::FindPolygonPerimeterEdgeNumberForVertices(_Script_MeshDescription::PolygonID PolygonID, _Script_MeshDescription::VertexID EdgeVertexID0, _Script_MeshDescription::VertexID EdgeVertexID1) {
    return;
}
void _Script_EditableMesh::EditableMesh::FindPolygonLoop(_Script_MeshDescription::EdgeID EdgeID, void*& OutEdgeLoopEdgeIDs, void*& OutFlippedEdgeIDs, void*& OutReversedEdgeIDPathToTake, void*& OutPolygonIDsToSplit) {
    return;
}
int32_t _Script_EditableMesh::EditableMesh::FindPolygonHoleEdgeNumberForVertices(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, _Script_MeshDescription::VertexID EdgeVertexID0, _Script_MeshDescription::VertexID EdgeVertexID1) {
    return;
}
void _Script_EditableMesh::EditableMesh::ExtrudePolygons(void*& Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, void*& OutNewExtrudedFrontPolygons) {
    return;
}
void _Script_EditableMesh::EditableMesh::ExtendEdges(void*& EdgeIDs, bool bWeldNeighbors, void*& OutNewExtendedEdgeIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::EndModification(bool bFromUndo) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeleteVertexInstances(void*& VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(_Script_MeshDescription::VertexID VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeletePolygons(void*& PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeletePolygonGroups(void*& PolygonGroupIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeleteEdges(void*& EdgeIDsToDelete, bool bDeleteOrphanedVertices) {
    return;
}
void _Script_EditableMesh::EditableMesh::DeleteEdgeAndConnectedPolygons(_Script_MeshDescription::EdgeID EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreateVertices(void*& VerticesToCreate, void*& OutNewVertexIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreateVertexInstances(void*& VertexInstancesToCreate, void*& OutNewVertexInstanceIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreatePolygons(void*& PolygonsToCreate, void*& OutNewPolygonIDs, void*& OutNewEdgeIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreateMissingPolygonHoleEdges(_Script_MeshDescription::PolygonID PolygonID, int32_t HoleNumber, void*& OutNewEdgeIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::CreateEmptyVertexRange(int32_t NumVerticesToCreate, void*& OutNewVertexIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::ComputePolygonTriangulation(_Script_MeshDescription::PolygonID PolygonID, void*& OutTriangles) {
    return;
}
void _Script_EditableMesh::EditableMesh::ComputePolygonsSharedEdges(void*& PolygonIDs, void*& OutSharedEdgeIDs) {
    return;
}
_Script_CoreUObject::Plane _Script_EditableMesh::EditableMesh::ComputePolygonPlane(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_CoreUObject::Vector _Script_EditableMesh::EditableMesh::ComputePolygonCenter(_Script_MeshDescription::PolygonID PolygonID) {
    return;
}
_Script_CoreUObject::BoxSphereBounds _Script_EditableMesh::EditableMesh::ComputeBoundingBoxAndSphere() {
    return;
}
_Script_CoreUObject::Box _Script_EditableMesh::EditableMesh::ComputeBoundingBox() {
    return;
}
bool _Script_EditableMesh::EditableMesh::ComputeBarycentricWeightForPointOnPolygon(_Script_MeshDescription::PolygonID PolygonID, _Script_CoreUObject::Vector PointOnPolygon, _Script_MeshDescription::MeshTriangle& OutTriangle, _Script_CoreUObject::Vector& OutTriangleVertexWeights) {
    return;
}
_Script_EditableMesh::EditableMesh* _Script_EditableMesh::EditableMesh::CommitInstance(_Script_Engine::PrimitiveComponent* ComponentToInstanceTo) {
    return;
}
void _Script_EditableMesh::EditableMesh::Commit() {
    return;
}
void _Script_EditableMesh::EditableMesh::ChangePolygonsVertexInstances(void*& VertexInstancesForPolygons) {
    return;
}
void _Script_EditableMesh::EditableMesh::BevelPolygons(void*& PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, void*& OutNewCenterPolygonIDs, void*& OutNewSidePolygonIDs) {
    return;
}
void _Script_EditableMesh::EditableMesh::AssignPolygonsToPolygonGroups(void*& PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups) {
    return;
}
