<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    </head>

    <body>
        <form action="<?php echo site_url('/ajaxfile/');?>" method="post" id="cross-form">
			<input name="callback" value="<?php echo $callback; ?>">
            <input type="hidden" name="uploadinfo" value="<?php echo $filename;?>">
        </form>
        <script language="JavaScript" type="text/javascript">
           document.getElementById("cross-form").submit();
        </script>
    </body>
</html>