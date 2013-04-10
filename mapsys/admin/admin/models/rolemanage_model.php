<?
class Rolemanage_model extends CI_Model
{
	function Rolemanage_model(){
		parent::__construct();
		$this->load->database();
		$this->_tablename = 'roles';
		$this->_primarykey = 'role_id';
	}

	function desc()
	{
		$sql = "SHOW FULL COLUMNS FROM {$this->db->dbprefix}{$this->_tablename}";
		$result = $this->db->query($sql);
		$this->field_array = $result->result_array();
		return $this->field_array;
	}

	function result($where = '')
	{
		!empty($where)?$this->db->where($where):'';
		$result = $this->db->get($this->_tablename);
		return $result->result_array();
	}

	function update($data_array, $where = '')
	{
		if(empty($data_array))
			return false;

		if(empty($where))
			return false;

		$result = $this->db->update($this->_tablename, $data_array, $where);
		return $result;
	}

	function del($where = '')
	{
		if(empty($where))
			return false;
		
		$result = $this->db->delete($this->_tablename, $where);
		return $result;
	}

	function add($data_array)
	{
		if(empty($data_array))
			return false;

		$result = $this->db->insert($this->_tablename, $data_array);
		if(!empty($result))
		{
			return $this->db->insert_id();
		}else{
			return '';
		}
	}
}
?>