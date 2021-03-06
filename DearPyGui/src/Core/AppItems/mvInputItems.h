#pragma once

#include <utility>
#include "mvAppItem.h"

//-----------------------------------------------------------------------------
// Widget Index
//
//     * mvInputInt
//     * mvInputInt2
//     * mvInputInt3
//     * mvInputInt4
//     * mvInputFloat
//     * mvInputFloat2
//     * mvInputFloat3
//     * mvInputFloat4
//
//-----------------------------------------------------------------------------

namespace Marvel {

	//-----------------------------------------------------------------------------
	// mvInputInt
	//-----------------------------------------------------------------------------
	class mvInputInt : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputInt)

			mvInputInt(const std::string& parent, const std::string& name, int default_value)
			: mvIntItemBase(parent, name, 1, default_value) {}

		void draw() override
		{

			if (ImGui::InputInt(m_label.c_str(), m_value.data()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}

		}

	};

	//-----------------------------------------------------------------------------
	// mvInputInt2
	//-----------------------------------------------------------------------------
	class mvInputInt2 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputInt2)

		mvInputInt2(const std::string& parent, const std::string& name, int default_value[2])
			: mvIntItemBase(parent, name, 2, default_value[0], default_value[1]) {}

		void draw() override
		{

			if (ImGui::InputInt2(m_label.c_str(), m_value.data()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}

		}

	};

	//-----------------------------------------------------------------------------
	// mvInputInt3
	//-----------------------------------------------------------------------------
	class mvInputInt3 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputInt3)

		mvInputInt3(const std::string& parent, const std::string& name, int default_value[3])
			: mvIntItemBase(parent, name, 3, default_value[0], default_value[1], default_value[2]) {}

		void draw() override
		{

			if (ImGui::InputInt3(m_label.c_str(), m_value.data()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}

		}

	};

	//-----------------------------------------------------------------------------
	// mvInputInt4
	//-----------------------------------------------------------------------------
	class mvInputInt4 : public mvIntItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputInt4)

		mvInputInt4(const std::string& parent, const std::string& name, int default_value[4])
			: mvIntItemBase(parent, name, 4, default_value[0], default_value[1], default_value[2], default_value[3]) {}

		void draw() override
		{

			if (ImGui::InputInt4(m_label.c_str(), m_value.data()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}

		}

	};

	//-----------------------------------------------------------------------------
	// mvInputFloat
	//-----------------------------------------------------------------------------
	class mvInputFloat : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputFloat)

		mvInputFloat(const std::string& parent, const std::string& name, float default_value, std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 1, default_value), m_format(std::move(format))
		{
		}

		void draw() override
		{
			if (ImGui::InputFloat(m_label.c_str(), m_value.data(), 0.0f, 0.0f, m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvInputFloat2
	//-----------------------------------------------------------------------------
	class mvInputFloat2 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputFloat2)

		mvInputFloat2(const std::string& parent, const std::string& name, float default_value[2], std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 2, default_value[0], default_value[1]), m_format(std::move(format))
		{
		}

		void draw() override
		{
			if (ImGui::InputFloat2(m_label.c_str(), m_value.data(), m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvInputFloat3
	//-----------------------------------------------------------------------------
	class mvInputFloat3 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputFloat3)

		mvInputFloat3(const std::string& parent, const std::string& name, float default_value[3], std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 3, default_value[0], default_value[1], default_value[2]), m_format(std::move(format))
		{
		}

		void draw() override
		{
			if (ImGui::InputFloat3(m_label.c_str(), m_value.data(), m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		std::string m_format;

	};

	//-----------------------------------------------------------------------------
	// mvInputFloat4
	//-----------------------------------------------------------------------------
	class mvInputFloat4 : public mvFloatItemBase
	{

	public:

		MV_APPITEM_TYPE(mvAppItemType::InputFloat4)

		mvInputFloat4(const std::string& parent, const std::string& name, float default_value[4], std::string  format = "%.3f")
			: mvFloatItemBase(parent, name, 4, default_value[0], default_value[1], default_value[2], default_value[3]), m_format(std::move(format))
		{
		}

		void draw() override
		{
			if (ImGui::InputFloat4(m_label.c_str(), m_value.data(), m_format.c_str()))
			{
				if (!m_dataSource.empty())
					mvDataStorage::AddData(m_dataSource, getPyValue());

				mvApp::GetApp()->runCallback(m_callback, m_name);

				// Context Menu
				if (!getPopup().empty())
					ImGui::OpenPopup(getPopup().c_str());
			}
		}

	private:

		std::string m_format;

	};

}