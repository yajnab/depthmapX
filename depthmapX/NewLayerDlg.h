// Copyright (C) 2011-2012, Tasos Varoudis

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "ui_NewLayerDlg.h"

class CNewLayerDlg : public QDialog, public Ui::CNewLayerDlg
{
	Q_OBJECT
public:
	CNewLayerDlg(QWidget *parent = 0);
	int		m_layer_type;
	QString	m_name;
	void UpdateData(bool value);
	void showEvent(QShowEvent * event);

	private slots:
		void OnSelchangeLayerType(int);
		void OnOK();
		void OnCancel();
};
